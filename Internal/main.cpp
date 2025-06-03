#include <fstream>
#include <iostream>
#include <vector>
#include "lodepng.h"
#include "SDK/SDK.hpp"

bool SaveTextureToPNG(SDK::UTexture2D* Texture, const std::string& Filename) {
    if (!Texture) {
        std::cout << "Invalid texture pointer" << std::endl;
        return false;
    }

    // Get texture dimensions
    int32_t SizeX = Texture->Blueprint_GetSizeX();
    int32_t SizeY = Texture->Blueprint_GetSizeY();

    if (SizeX <= 0 || SizeY <= 0) {
        std::cout << "Invalid texture dimensions" << std::endl;
        return false;
    }

    // Create a render target to read the texture data
    SDK::UTextureRenderTarget2D* RenderTarget = SDK::UTextureRenderTarget2D::Create(SizeX, SizeY, SDK::PF_B8G8R8A8);
    if (!RenderTarget) {
        std::cout << "Failed to create render target" << std::endl;
        return false;
    }

    // Copy texture to render target
    SDK::FTextureRenderTargetResource* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
    if (!RenderTargetResource) {
        std::cout << "Failed to get render target resource" << std::endl;
        return false;
    }

    // Read the render target data
    SDK::TArray<SDK::FColor> SurfData;
    RenderTargetResource->ReadPixels(SurfData);

    if (SurfData.Num() == 0) {
        std::cout << "Failed to read pixel data" << std::endl;
        return false;
    }

    // Convert to PNG
    std::vector<unsigned char> PNGData;
    std::vector<unsigned char> ImageData;
    ImageData.resize(SizeX * SizeY * 4);

    // Copy pixel data
    for (int32_t Y = 0; Y < SizeY; Y++) {
        for (int32_t X = 0; X < SizeX; X++) {
            int32_t Index = Y * SizeX + X;
            SDK::FColor Color = SurfData[Index];
            ImageData[Index * 4 + 0] = Color.R;
            ImageData[Index * 4 + 1] = Color.G;
            ImageData[Index * 4 + 2] = Color.B;
            ImageData[Index * 4 + 3] = Color.A;
        }
    }

    // Encode to PNG
    unsigned Error = lodepng::encode(PNGData, ImageData, SizeX, SizeY);
    if (Error) {
        std::cout << "Failed to encode PNG: " << lodepng_error_text(Error) << std::endl;
        return false;
    }

    // Save to file
    std::ofstream File(Filename, std::ios::binary);
    if (!File.is_open()) {
        std::cout << "Failed to open file for writing: " << Filename << std::endl;
        return false;
    }

    File.write(reinterpret_cast<const char*>(PNGData.data()), PNGData.size());
    File.close();

    std::cout << "Successfully saved texture to: " << Filename << std::endl;
    return true;
} 
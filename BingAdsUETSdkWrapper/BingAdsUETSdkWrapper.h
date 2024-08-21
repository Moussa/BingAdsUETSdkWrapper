#pragma once

#include <winrt/Windows.Foundation.h>
#include <winrt/Microsoft.BingAds.UETSdk.h>

class __declspec(dllexport) BingAdsUETSdkWrapper
{
public:
    // Initializes the UET SDK with the given tag ID
    static void initialize(int64_t tagId);
};

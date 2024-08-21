#include "pch.h"

#include <winrt/Microsoft.BingAds.UETSdk.h>

#include "BingAdsUETSdkWrapper.h"

using namespace winrt::Microsoft::BingAds::UETSdk;
using namespace std;

winrt::Microsoft::BingAds::UETSdk::UETSdk uetSdk{ nullptr };

void BingAdsUETSdkWrapper::initialize(int64_t tagId)
{
    if (uetSdk != NULL)
    {
        return;
    }

    uetSdk = winrt::Microsoft::BingAds::UETSdk::UETSdk(tagId);
}
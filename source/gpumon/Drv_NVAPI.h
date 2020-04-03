#pragma once

#include "..\drvdefs.h"



#ifdef __cplusplus
extern "C" {
#endif

int NVAPI_Initialize();
void NVAPI_Uninitialize();
int NVAPI_GetGpuDetails( int AdapterNumber, GPUDETAILS* pGpuDetails );
int NVAPI_GetOverallGpuLoad( int AdapterNumber, GPUSTATISTICS* pGpuStatistics );
int NVAPI_GetProcessGpuLoad( void* pProcess );
int NVAPI_GetGpuTemperature();

#ifdef __cplusplus
}
#endif

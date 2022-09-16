#include <windows.h>
#include <mmsystem.h>
#include <iostream>
#include <ctime>
#pragma comment(lib, "winmm.lib")

int main()
{
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 80000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 60] = {};
	// See http://goo.gl/hQdTi
	for (DWORD t = 0; t < sizeof(buffer); ++t) {
		//buffer[t] = static_cast<char>((((t * (t >> 8 | t >> 9) & 46 & t >> 8)) ^ (t & t >> 13 | t >> 6)) & 0xF1);
		// 10000 for dit
		// 30000 for dah
		// 10000 for lettering change
		// 70000 for space between words
		if (t < 10000) {
			buffer[t] = static_cast<char>(t);
		}
	}

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
	Sleep(60 * 1000);
}
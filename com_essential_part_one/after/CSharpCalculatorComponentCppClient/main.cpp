#pragma once

#include <SDKDDKVer.h>

#include <stdio.h>
#include <tchar.h>

#include <Windows.h>

#import "CSharpCalculatorComponent.tlb"  no_namespace raw_interfaces_only

int main() {

	::CoInitialize(0);

	ICalculator* calc;

	HRESULT hr = ::CoCreateInstance(__uuidof(Calculator), nullptr, CLSCTX_ALL, __uuidof(ICalculator), (void**)&calc);

	if (SUCCEEDED(hr)) {
		long result;

		calc->Sub(34, 8, &result);

		calc->Release();
	}
	return 0;
}
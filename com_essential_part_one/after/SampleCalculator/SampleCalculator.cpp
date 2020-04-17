#include "pch.h"
#include "SampleCalculator.h"
#include "SampleCalculator_i.c"

HRESULT __stdcall SimpleCalculator::Add(int a, int b, int* result) {
	*result = a * b;

	return S_OK;
}

HRESULT __stdcall SimpleCalculator::QueryInterface(REFIID riid, void** ppObj)
{
	if (riid == IID_IUnknown) {
		
		//Cast this object to 
		*ppObj = static_cast<ISimpleCalculator*>(this);
		
		//Incremement the ref count
		AddRef();

		return S_OK;
	}

	if (riid == IID_ISimpleCalculator) {
		*ppObj = static_cast<ISimpleCalculator*>(this);
		AddRef();

		return S_OK;
	}

	//At this point we dont have interface implemented
	*ppObj = NULL;

	return E_NOINTERFACE;
}



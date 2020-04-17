#pragma once

#include "pch.h"
#include "SampleCalculator_h.h"

class __declspec(uuid("65B4D77B-08E5-4FB8-971C-4195ABDDB873")) SimpleCalculator : public ISimpleCalculator {
public:
	//ctor
	SimpleCalculator() {
		m_refCount = 0;
	}

	//IUnknown
	HRESULT __stdcall QueryInterface(REFIID riid, void** ppObj);

	ULONG __stdcall AddRef()
	{
		return InterlockedIncrement(&m_refCount);
	};

	ULONG __stdcall Release() {
		long mRefCount = 0;

		mRefCount = InterlockedDecrement(&m_refCount);

		if (mRefCount == 0)
			delete this;
		return mRefCount;
	}

	//IsimpleCalculator
	HRESULT __stdcall Add(int a, int b, int* result);


private:
	long m_refCount;
};
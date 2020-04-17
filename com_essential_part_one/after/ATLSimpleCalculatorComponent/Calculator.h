#pragma once

#include "pch.h"
#include "ATLSimpleCalculatorComponent_i.h"

//
using namespace ATL;

class ATL_NO_VTABLE CCalculator :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCalculator, &CLSID_Calculator>,
	public ISimpleCalculator{
public:
	CCalculator() : m_Degrees(VARIANT_FALSE) {
		ATLTRACE(_T("Calculator created %p\n"), this);
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_ATLSIMPLECALCULATORCOMPONENT)


	BEGIN_COM_MAP(CCalculator)
		COM_INTERFACE_ENTRY(ISimpleCalculator)
	END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct() {
		return S_OK;
	}

	void FinalRelease() {
	}

	~CCalculator() {
		ATLTRACE(_T("Calculator destroyed %p\n"), this);
	}

private:
	VARIANT_BOOL m_Degrees;

public:
	STDMETHOD(Add)(int a, int b, int* result);
};

OBJECT_ENTRY_AUTO(__uuidof(Calculator), CCalculator)
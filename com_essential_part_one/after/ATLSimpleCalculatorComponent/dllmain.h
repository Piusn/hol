// dllmain.h : Declaration of module class.

class CATLSimpleCalculatorComponentModule : public ATL::CAtlDllModuleT< CATLSimpleCalculatorComponentModule >
{
public :
	DECLARE_LIBID(LIBID_ATLSimpleCalculatorComponentLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLSIMPLECALCULATORCOMPONENT, "{aabe3e43-e4a5-4b4d-8f9f-0f2faeda17a9}")
};

extern class CATLSimpleCalculatorComponentModule _AtlModule;

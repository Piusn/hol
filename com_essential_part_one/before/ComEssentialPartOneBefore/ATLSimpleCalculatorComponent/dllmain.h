// dllmain.h : Declaration of module class.

class CATLSimpleCalculatorComponentModule : public ATL::CAtlDllModuleT< CATLSimpleCalculatorComponentModule >
{
public :
	DECLARE_LIBID(LIBID_ATLSimpleCalculatorComponentLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLSIMPLECALCULATORCOMPONENT, "{a96484d2-d503-4e1d-9487-cd9d64e6b331}")
};

extern class CATLSimpleCalculatorComponentModule _AtlModule;

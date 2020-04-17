using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CSharpCalculatorComponent
{
    [Guid("F680B0D2-4614-4BA5-9551-8F9E3614ACD6")]
    [InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
    //[ComVisible(true)]
    public interface ICalculator
    {
        int Sub(int a, int b);
    }
    /// <summary>
    /// Assembly marked as ComVisible
    /// members marked as public
    /// Be marked with ComVisible
    /// Default Constructor
    /// May have a GUID, if not a guid will be generated automatically
    /// Register with regasm.exe
    /// You can also provide tlb, use visual studio
    /// </summary>
    [Guid("5A2A7B18-7760-40B4-A038-D69E93F3F835")]
    [ClassInterface(ClassInterfaceType.None)] //avoid autogeneration of the names
    //[ComVisible(true)] //this the default for classes though
    public class Calculator : ICalculator
    {
        public int Sub(int a, int b)
        {
            return a - b;
        }
    }
}

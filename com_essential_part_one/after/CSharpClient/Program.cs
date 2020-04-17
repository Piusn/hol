using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CSharpClient
{
    class Program
    {
        #region Native Calculator mapping
        
        [ComImport]
        [Guid("91E4BC03-6E63-49C7-913D-6F66329514A4")]
        [InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
        interface ISimpleCalculator
        {
            int Add(int a, int b);
        }

        [Guid("179a5a24-b7f1-43d4-978c-36b585fcac8c")]
        [ComImport]
        class Calculator { }
       
        #endregion

        #region CSharpCalculatorComponent Mapping
        
        [ComImport]
        [Guid("F680B0D2-4614-4BA5-9551-8F9E3614ACD6")]
        [InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
        interface ICSharpCalculatorComponentCalculator
        {
            int Sub(int a, int b);
        }

        [Guid("5A2A7B18-7760-40B4-A038-D69E93F3F835")]
        [ComImport]
        class CSharpCalculatorComponentCalculator { }
       
        #endregion

        static void Main(string[] args)
        {
            #region CSharpCalculatorComponent
            ICSharpCalculatorComponentCalculator cSharpCalculatorComponentCalculator = (ICSharpCalculatorComponentCalculator)new CSharpCalculatorComponentCalculator();
            int result = cSharpCalculatorComponentCalculator.Sub(9, 8);
            #endregion
           
            //Using COM interop
            ISimpleCalculator a = (ISimpleCalculator)new Calculator();
            var interopresult = a.Add(4, 66);

            ATLSimpleCalculatorComponentLib.ISimpleCalculator calc = new ATLSimpleCalculatorComponentLib.Calculator();
             result = calc.Add(4, 6);

            Console.WriteLine(result);
        }
    }
}

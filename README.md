# span-with-cplusplus
Simple repo for C++/CLI big

**To build:**
1. Open `span-with-cpluplus.sln` in Visual Studio 2019
2. Choose [<u>B</u>uild], [<u>R</u>ebuild]

**Or:**
1. Open *Command Prompt for VS 2019*
2. Change directory to `span-with-cplusplus`
3. Type `msbuild`

You will see warnings similar to these:
```
(ClCompile target) ->
  c:\git\span-with-cplusplus\TestClass.h(8,40): warning C4996: 'System::Span<unsigned char>': was declared deprecated [
c:\git\span-with-cplusplus\span-with-cplusplus.vcxproj]
  c:\git\span-with-cplusplus\TestClass.cpp(3,47): warning C4996: 'System::Span<unsigned char>': was declared deprecated
 [c:\git\span-with-cplusplus\span-with-cplusplus.vcxproj]
  c:\git\span-with-cplusplus\TestClass.cpp(5,29): warning C4996: 'System::Span<unsigned char>::ToArray': was declared d
eprecated [c:\git\span-with-cplusplus\span-with-cplusplus.vcxproj]
```
# HEDZ
A decompile project of the old game H.E.D.Z. for educational purposes

## Links
https://en.wikibooks.org/wiki/X86_Disassembly/Windows_Executable_Files

https://github.com/NationalSecurityAgency/ghidra/blob/0cdc722921cef61b7ca1b7236bdc21079fd4c03e/Ghidra/Framework/SoftwareModeling/src/main/java/ghidra/program/model/symbol/SymbolUtilities.java#L44

## Ghidra Version
https://github.com/NationalSecurityAgency/ghidra/releases/tag/Ghidra_10.3_build

## Discoveries
- Rendering is done via D3D2
- Audio and Video are stored in the RIFF format (WAVE/AVI respectively)
- Audio Engine uses the Miles Sound System (MSS) developed by RAD Game Tools
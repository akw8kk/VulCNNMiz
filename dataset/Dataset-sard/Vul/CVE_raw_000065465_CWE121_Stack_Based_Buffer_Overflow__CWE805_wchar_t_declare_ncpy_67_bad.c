void FUN1()
{
    wchar_t * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67_structType VAR2;
    wchar_t VAR3[50];
    wchar_t VAR4[100];
    
    VAR1 = VAR3;
    VAR1[0] = VAR5''; 
    VAR2.VAR6 = VAR1;
    FUN2(VAR2);
}
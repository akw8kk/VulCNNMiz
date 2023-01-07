void FUN1()
{
    wchar_t * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memcpy_67_structType VAR2;
    wchar_t VAR3[100];
    VAR1 = VAR3;
    
    wmemset(VAR1, VAR4'', 100-1); 
    VAR1[100-1] = VAR4''; 
    VAR2.VAR5 = VAR1;
    FUN2(VAR2);
}
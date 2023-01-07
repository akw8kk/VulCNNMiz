void FUN1()
{
    wchar_t * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_snprintf_67_structType VAR2;
    wchar_t * VAR3 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    
    VAR1 = VAR3;
    VAR1[0] = VAR5''; 
    VAR2.VAR6 = VAR1;
    FUN3(VAR2);
}
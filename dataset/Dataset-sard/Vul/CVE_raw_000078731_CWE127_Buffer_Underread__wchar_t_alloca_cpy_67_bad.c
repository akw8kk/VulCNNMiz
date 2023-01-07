void FUN1()
{
    wchar_t * VAR1;
    CWE127_Buffer_Underread__wchar_t_alloca_cpy_67_structType VAR2;
    wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR3, VAR4'', 100-1);
    VAR3[100-1] = VAR4'';
    
    VAR1 = VAR3 - 8;
    VAR2.VAR5 = VAR1;
    FUN3(VAR2);
}
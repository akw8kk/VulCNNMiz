void FUN1()
{
    wchar_t * VAR1;
    CWE127_Buffer_Underread__malloc_wchar_t_cpy_67_structType VAR2;
    VAR1 = NULL;
    {
        wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(VAR3, VAR4'', 100-1);
        VAR3[100-1] = VAR4'';
        
        VAR1 = VAR3 - 8;
    }
    VAR2.VAR5 = VAR1;
    FUN2(VAR2);
}
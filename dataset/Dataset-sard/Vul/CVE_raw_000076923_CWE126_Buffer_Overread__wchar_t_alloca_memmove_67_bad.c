void FUN1()
{
    wchar_t * VAR1;
    CWE126_Buffer_Overread__wchar_t_alloca_memmove_67_structType VAR2;
    wchar_t * VAR3 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR3, VAR5'', 50-1); 
    VAR3[50-1] = VAR5''; 
    wmemset(VAR4, VAR5'', 100-1); 
    VAR4[100-1] = VAR5''; 
    
    VAR1 = VAR3;
    VAR2.VAR6 = VAR1;
    FUN3(VAR2);
}
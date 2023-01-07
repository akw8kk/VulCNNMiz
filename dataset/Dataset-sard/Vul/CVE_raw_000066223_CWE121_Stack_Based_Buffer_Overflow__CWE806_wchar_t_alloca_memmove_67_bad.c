void FUN1()
{
    wchar_t * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memmove_67_structType VAR2;
    wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR3;
    
    wmemset(VAR1, VAR4'', 100-1); 
    VAR1[100-1] = VAR4''; 
    VAR2.VAR5 = VAR1;
    FUN3(VAR2);
}
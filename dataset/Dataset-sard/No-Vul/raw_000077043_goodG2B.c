static void FUN1()
{
    wchar_t * VAR1;
    CWE126_Buffer_Overread__wchar_t_declare_memmove_67_structType VAR2;
    wchar_t VAR3[50];
    wchar_t VAR4[100];
    wmemset(VAR3, VAR5'', 50-1); 
    VAR3[50-1] = VAR5''; 
    wmemset(VAR4, VAR5'', 100-1); 
    VAR4[100-1] = VAR5''; 
    
    VAR1 = VAR4;
    VAR2.VAR6 = VAR1;
    FUN2(VAR2);
}
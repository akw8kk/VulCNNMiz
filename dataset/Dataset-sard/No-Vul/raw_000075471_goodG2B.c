static void FUN1()
{
    wchar_t * VAR1;
    CWE124_Buffer_Underwrite__wchar_t_declare_loop_67_structType VAR2;
    wchar_t VAR3[100];
    wmemset(VAR3, VAR4'', 100-1);
    VAR3[100-1] = VAR4'';
    
    VAR1 = VAR3;
    VAR2.VAR5 = VAR1;
    FUN2(VAR2);
}
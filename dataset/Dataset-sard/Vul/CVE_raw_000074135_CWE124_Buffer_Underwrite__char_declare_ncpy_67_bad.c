void FUN1()
{
    char * VAR1;
    CWE124_Buffer_Underwrite__char_declare_ncpy_67_structType VAR2;
    char VAR3[100];
    memset(VAR3, '', 100-1);
    VAR3[100-1] = '';
    
    VAR1 = VAR3 - 8;
    VAR2.VAR4 = VAR1;
    FUN2(VAR2);
}
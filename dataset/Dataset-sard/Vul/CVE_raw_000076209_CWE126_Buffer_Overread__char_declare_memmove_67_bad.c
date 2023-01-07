void FUN1()
{
    char * VAR1;
    CWE126_Buffer_Overread__char_declare_memmove_67_structType VAR2;
    char VAR3[50];
    char VAR4[100];
    memset(VAR3, '', 50-1); 
    VAR3[50-1] = ''; 
    memset(VAR4, '', 100-1); 
    VAR4[100-1] = ''; 
    
    VAR1 = VAR3;
    VAR2.VAR5 = VAR1;
    FUN2(VAR2);
}
static void FUN1()
{
    char * VAR1;
    CWE126_Buffer_Overread__malloc_char_memmove_67_structType VAR2;
    VAR1 = NULL;
    
    VAR1 = (char *)malloc(100*sizeof(char));
    memset(VAR1, '', 100-1); 
    VAR1[100-1] = ''; 
    VAR2.VAR3 = VAR1;
    FUN2(VAR2);
}
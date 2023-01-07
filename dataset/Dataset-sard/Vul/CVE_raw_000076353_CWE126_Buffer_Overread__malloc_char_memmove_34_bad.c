void FUN1()
{
    char * VAR1;
    CWE126_Buffer_Overread__malloc_char_memmove_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (char *)malloc(50*sizeof(char));
    memset(VAR1, '', 50-1); 
    VAR1[50-1] = ''; 
    VAR2.VAR3 = VAR1;
    {
        char * VAR1 = VAR2.VAR4;
        {
            char VAR5[100];
            memset(VAR5, '', 100-1);
            VAR5[100-1] = ''; 
            
            memmove(VAR5, VAR1, strlen(VAR5)*sizeof(char));
            VAR5[100-1] = '';
            FUN2(VAR5);
            free(VAR1);
        }
    }
}
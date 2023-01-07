void FUN1()
{
    char * VAR1;
    CWE126_Buffer_Overread__malloc_char_loop_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (char *)malloc(50*sizeof(char));
    memset(VAR1, '', 50-1); 
    VAR1[50-1] = ''; 
    VAR2.VAR3 = VAR1;
    {
        char * VAR1 = VAR2.VAR4;
        {
            size_t VAR5, VAR6;
            char VAR7[100];
            memset(VAR7, '', 100-1);
            VAR7[100-1] = ''; 
            VAR6 = strlen(VAR7);
            
            for (VAR5 = 0; VAR5 < VAR6; VAR5++)
            {
                VAR7[VAR5] = VAR1[VAR5];
            }
            VAR7[100-1] = '';
            FUN2(VAR7);
            free(VAR1);
        }
    }
}
static void FUN1()
{
    char * VAR1;
    CWE127_Buffer_Underread__malloc_char_loop_34_unionType VAR2;
    VAR1 = NULL;
    {
        char * VAR3 = (char *)malloc(100*sizeof(char));
        memset(VAR3, '', 100-1);
        VAR3[100-1] = '';
        
        VAR1 = VAR3;
    }
    VAR2.VAR4 = VAR1;
    {
        char * VAR1 = VAR2.VAR5;
        {
            size_t VAR6;
            char VAR7[100];
            memset(VAR7, '', 100-1); 
            VAR7[100-1] = ''; 
            
            for (VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR7[VAR6] = VAR1[VAR6];
            }
            
            VAR7[100-1] = '';
            FUN2(VAR7);
            
        }
    }
}
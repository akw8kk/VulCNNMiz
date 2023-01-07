static void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    memset(VAR2, '', 50-1); 
    VAR2[50-1] = ''; 
    memset(VAR3, '', 100-1); 
    VAR3[100-1] = ''; 
    
    VAR1 = VAR3;
    {
        char * VAR4 = VAR1;
        char * VAR1 = VAR4;
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
        }
    }
}
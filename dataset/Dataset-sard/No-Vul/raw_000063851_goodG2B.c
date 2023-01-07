static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char * VAR4 = (char *)FUN2(50*sizeof(char));
    char * VAR5 = (char *)FUN2(100*sizeof(char));
    {
        char * VAR1 = *VAR2;
        
        VAR1 = VAR5;
        VAR1[0] = ''; 
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            size_t VAR6;
            char VAR7[100];
            memset(VAR7, '', 100-1); 
            VAR7[100-1] = ''; 
            
            for (VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR1[VAR6] = VAR7[VAR6];
            }
            VAR1[100-1] = ''; 
            FUN3(VAR1);
        }
    }
}
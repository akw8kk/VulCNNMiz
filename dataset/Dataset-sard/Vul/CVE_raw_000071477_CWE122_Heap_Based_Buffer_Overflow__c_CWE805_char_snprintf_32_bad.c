void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        char * VAR1 = *VAR2;
        
        VAR1 = (char *)malloc(50*sizeof(char));
        VAR1[0] = ''; 
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            char VAR4[100];
            memset(VAR4, '', 100-1); 
            VAR4[100-1] = ''; 
            
            FUN2(VAR1, 100, "", VAR4);
            FUN3(VAR1);
            free(VAR1);
        }
    }
}
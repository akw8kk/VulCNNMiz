void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    {
        char * VAR1 = *VAR2;
        
        memset(VAR1, '', 100-1); 
        VAR1[100-1] = ''; 
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            char VAR4[50] = "";
            
            strcpy(VAR4, VAR1);
            FUN2(VAR1);
            free(VAR1);
        }
    }
}
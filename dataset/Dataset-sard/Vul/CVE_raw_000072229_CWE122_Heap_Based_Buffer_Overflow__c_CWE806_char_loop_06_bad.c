void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    if(VAR2==5)
    {
        
        memset(VAR1, '', 100-1); 
        VAR1[100-1] = ''; 
    }
    {
        char VAR3[50] = "";
        size_t VAR4, VAR5;
        VAR5 = strlen(VAR1);
        
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            VAR3[VAR4] = VAR1[VAR4];
        }
        VAR3[50-1] = ''; 
        FUN2(VAR1);
        free(VAR1);
    }
}
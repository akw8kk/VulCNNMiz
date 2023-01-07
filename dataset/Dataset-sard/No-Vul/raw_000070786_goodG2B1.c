static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(5!=5)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = (char *)malloc((10+1)*sizeof(char));
    }
    {
        char VAR2[10+1] = VAR3;
        size_t VAR4, VAR5;
        VAR5 = strlen(VAR2);
        
        
        for (VAR4 = 0; VAR4 < VAR5 + 1; VAR4++)
        {
            VAR1[VAR4] = VAR2[VAR4];
        }
        FUN2(VAR1);
        free(VAR1);
    }
}
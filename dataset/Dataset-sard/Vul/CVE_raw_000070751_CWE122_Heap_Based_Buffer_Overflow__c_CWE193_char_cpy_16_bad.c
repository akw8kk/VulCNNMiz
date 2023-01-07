void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    while(1)
    {
        
        VAR1 = (char *)malloc(10*sizeof(char));
        break;
    }
    {
        char VAR2[10+1] = VAR3;
        
        strcpy(VAR1, VAR2);
        FUN2(VAR1);
        free(VAR1);
    }
}
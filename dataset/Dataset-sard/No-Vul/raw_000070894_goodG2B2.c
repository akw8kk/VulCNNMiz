static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    switch(6)
    {
    case 6:
        
        VAR1 = (char *)malloc((10+1)*sizeof(char));
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        char VAR2[10+1] = VAR3;
        
        
        memmove(VAR1, VAR2, (strlen(VAR2) + 1) * sizeof(char));
        FUN2(VAR1);
        free(VAR1);
    }
}
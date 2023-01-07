void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    switch(6)
    {
    case 6:
        
        memset(VAR1, '', 100-1); 
        VAR1[100-1] = ''; 
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        char VAR2[50] = "";
        size_t VAR3, VAR4;
        VAR4 = strlen(VAR1);
        
        for (VAR3 = 0; VAR3 < VAR4; VAR3++)
        {
            VAR2[VAR3] = VAR1[VAR3];
        }
        VAR2[50-1] = ''; 
        FUN2(VAR1);
        free(VAR1);
    }
}
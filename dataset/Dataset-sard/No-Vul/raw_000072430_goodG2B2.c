static void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    switch(6)
    {
    case 6:
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        char VAR2[50] = "";
        
        strncpy(VAR2, VAR1, strlen(VAR1));
        VAR2[50-1] = ''; 
        FUN2(VAR1);
        free(VAR1);
    }
}
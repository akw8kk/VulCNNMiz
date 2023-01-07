static void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
        break;
    }
    {
        char VAR2[50] = "";
        
        memcpy(VAR2, VAR1, strlen(VAR1)*sizeof(char));
        VAR2[50-1] = ''; 
        FUN2(VAR1);
        free(VAR1);
    }
}
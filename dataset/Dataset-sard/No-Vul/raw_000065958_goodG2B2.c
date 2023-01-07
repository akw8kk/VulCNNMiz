static void FUN1()
{
    char * VAR1;
    char VAR2[100];
    VAR1 = VAR2;
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
        char VAR3[50] = "";
        
        strncat(VAR3, VAR1, strlen(VAR1));
        VAR3[50-1] = ''; 
        FUN2(VAR1);
    }
}
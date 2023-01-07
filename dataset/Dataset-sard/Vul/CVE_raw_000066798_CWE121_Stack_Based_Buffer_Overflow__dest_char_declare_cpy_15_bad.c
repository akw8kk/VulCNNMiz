void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    switch(6)
    {
    case 6:
        
        VAR1 = VAR2;
        VAR1[0] = ''; 
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        strcpy(VAR1, VAR4);
        FUN2(VAR1);
    }
}
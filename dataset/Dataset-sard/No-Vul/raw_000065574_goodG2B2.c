static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR2;
    switch(6)
    {
    case 6:
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
        break;
    default:
        
        FUN3("");
        break;
    }
    {
        char VAR3[50] = "";
        
        memcpy(VAR3, VAR1, strlen(VAR1)*sizeof(char));
        VAR3[50-1] = ''; 
        FUN3(VAR1);
    }
}
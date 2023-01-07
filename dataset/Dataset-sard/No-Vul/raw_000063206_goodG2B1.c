static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2((10)*sizeof(char));
    char * VAR3 = (char *)FUN2((10+1)*sizeof(char));
    switch(5)
    {
    case 6:
        
        FUN3("");
        break;
    default:
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
        break;
    }
    {
        char VAR4[10+1] = VAR5;
        
        
        strncpy(VAR1, VAR4, strlen(VAR4) + 1);
        FUN3(VAR1);
    }
}
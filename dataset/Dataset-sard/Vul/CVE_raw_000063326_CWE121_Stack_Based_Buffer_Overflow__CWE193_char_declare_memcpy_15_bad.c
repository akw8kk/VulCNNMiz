void FUN1()
{
    char * VAR1;
    char VAR2[10];
    char VAR3[10+1];
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
        char VAR4[10+1] = VAR5;
        
        
        memcpy(VAR1, VAR4, (strlen(VAR4) + 1) * sizeof(char));
        FUN2(VAR1);
    }
}
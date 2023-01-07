static void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char VAR1[150], VAR2[100];
        
        memset(VAR1, '', 149);
        VAR1[149] = '';
        memcpy(VAR2, VAR1, 99*sizeof(char));
        VAR2[99] = ''; 
        FUN2(VAR2);
    }
    break;
    default:
        
        FUN2("");
        break;
    }
}
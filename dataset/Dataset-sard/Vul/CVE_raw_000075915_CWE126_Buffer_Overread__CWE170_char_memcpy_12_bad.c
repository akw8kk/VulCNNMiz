void FUN1()
{
    if(FUN2())
    {
        {
            char VAR1[150], VAR2[100];
            
            memset(VAR1, '', 149);
            VAR1[149] = '';
            memcpy(VAR2, VAR1, 99*sizeof(char));
            
            FUN3(VAR2);
        }
    }
    else
    {
        {
            char VAR1[150], VAR2[100];
            
            memset(VAR1, '', 149);
            VAR1[149] = '';
            memcpy(VAR2, VAR1, 99*sizeof(char));
            VAR2[99] = ''; 
            FUN3(VAR2);
        }
    }
}
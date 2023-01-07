static void FUN1()
{
    if(1)
    {
        {
            char VAR1[150], VAR2[100];
            
            memset(VAR1, '', 149);
            VAR1[149] = '';
            memcpy(VAR2, VAR1, 99*sizeof(char));
            VAR2[99] = ''; 
            FUN2(VAR2);
        }
    }
}
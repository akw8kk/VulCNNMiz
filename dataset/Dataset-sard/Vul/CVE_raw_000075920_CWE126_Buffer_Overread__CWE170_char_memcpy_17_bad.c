void FUN1()
{
    int VAR1;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            char VAR2[150], VAR3[100];
            
            memset(VAR2, '', 149);
            VAR2[149] = '';
            memcpy(VAR3, VAR2, 99*sizeof(char));
            
            FUN2(VAR3);
        }
    }
}
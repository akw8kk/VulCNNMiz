void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        
        size_t VAR2 = strlen((char *)VAR1);
        void * VAR3 = (void *)calloc(VAR2+1, 1);
        memcpy(VAR3, VAR1, (VAR2+1));
        FUN3((char *)VAR3);
        free(VAR3);
    }
}
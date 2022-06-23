gef config context.enable False
br main
run
br malloc
br free

define finishprintheap
finish
heap chunks
heap bins
end

commands 2
finishprintheap
end

commands 3
finishprintheap
end

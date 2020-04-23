#TAREA2

para este caso tuve que revisar sobre los comandos de base de datos ya que no me acordaba mucho.

SELECT
  curso.name, curso.start_date, MAX(evaluacion.score), MIN(evaluacion.score), AVG(evaluacion.score), STDEV(evaluacion.score)

FROM
  course curso,
  evaluations evaluacion,
  exams examen,

WHERE
  curso.pk=examen.course_fk AND examen.pk=evaluacon.exam_fk

GROUP BY
  curso.name, curso.start_date
